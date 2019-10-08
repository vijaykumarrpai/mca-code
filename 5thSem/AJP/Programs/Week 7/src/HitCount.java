import java.io.*;                
import javax.servlet.*;
import javax.servlet.http.*;    
import java.util.*;
 
public class HitCount extends HttpServlet    
{
  public void service(HttpServletRequest req, HttpServletResponse res) throws ServletException,  IOException  
  {
    res.setContentType("text/html") ;
    PrintWriter out = res.getWriter( );
 
    HttpSession session = req.getSession();  
 
    Integer hitNumber = (Integer) session.getAttribute("vijay");
	
    if(hitNumber == null)  
    {
      hitNumber = new Integer(1);
    }
    else  
    {
      hitNumber = new Integer(hitNumber.intValue()+1) ;
    }                         
 
    session.setAttribute("vijay", hitNumber);              
 
    out.println("Your Session ID:  " + session.getId()); 
 
    out.println("<br>Session Creation Time: " + new Date(session.getCreationTime()));                        
 
   out.println("<br>Time of Last Access: " + new Date(session.getLastAccessedTime()));
 
   out.println("<br>Latest Hit Count: " + hitNumber);
  }
}