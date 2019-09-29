package my.packages;

import java.sql.*;
import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
 
public class Validate extends HttpServlet {
 
    private static final long serialVersionUID = 1L;
 
public void doPost(HttpServletRequest request,HttpServletResponse 
 response) 
      throws ServletException,IOException
{
  response.setContentType("text/html;charset=UTF-8");
  PrintWriter out = response.getWriter();
  try{
    String name=request.getParameter("uid");
    String pass=request.getParameter("pid");
    Class.forName("com.mysql.jdbc.Driver");
    Connection con= DriverManager.getConnection("jdbc:mysql://localhost:3306/db_wbsb","root","");
 Statement s=con.createStatement();
ResultSet rs=s.executeQuery("select * from users where user='"+name+"' ");
 
   if(rs.next())
      {
                
 if( (name.trim().equals(rs.getString(1).trim())) && (   
       pass.trim().equals(rs.getString(2).trim()) )  )
    {
 
//New session creation
  HttpSession session=request.getSession(true);
  //setting attribute on session
  session.setAttribute("user",name);
 //send request to Welcome.jsp page
 
RequestDispatcher view =   
      request.getRequestDispatcher("Welcome.jsp");
        
view.forward(request, response);
                 
   }
  else
    {
 out.println("<div style='font-size:30px; color:red'>"
          +"Userid and password does not matched "+"</div>");
 RequestDispatcher view =
    request.getRequestDispatcher("Login.html");
     
view.include(request, response);
         }
      }
 else
  {
 out.println("<div style='font-size:30px; color:red'> Please fill userid and password </div>");
 RequestDispatcher view=request.getRequestDispatcher("Login.html");
    view.include(request, response);
   }
     }catch(Exception e){}
     finally{
     out.close();
 }
 }
}
