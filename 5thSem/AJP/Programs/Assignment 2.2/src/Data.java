import java.io.*;  
import java.io.*;  
import javax.servlet.*;  
import javax.servlet.http.*;      
public class Data extends HttpServlet 
{    
   public void doPost(HttpServletRequest request, 
     HttpServletResponse response) 
       throws ServletException, IOException 
   {        
       response.setContentType("text/html");      
       PrintWriter pwriter = response.getWriter();                
       String firstname=request.getParameter("fname");      
       String lastname=request.getParameter("lname");        
       String dob=request.getParameter("dob");  
       String skills=request.getParameter("skills");  
       String projects=request.getParameter("projects");  
       String hobbies=request.getParameter("hobbies");  
       RequestDispatcher dis=request.getRequestDispatcher("welcome");          
       dis.forward(request, response);            
       }      
   }
