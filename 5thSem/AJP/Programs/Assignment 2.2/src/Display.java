import java.io.*; 
import javax.servlet.*; 
import javax.servlet.http.*; 
 
public class Display extends HttpServlet { 
 
 public void doPost(HttpServletRequest request, 
 HttpServletResponse response) 
 throws ServletException, IOException 
 { 
 
    response.setContentType("text/html"); 
    PrintWriter pwriter = response.getWriter(); 
 
    String firstname=request.getParameter("fname");
    pwriter.print(firstname);
    String lastname=request.getParameter("lname");
    pwriter.print(lastname);
    String dob=request.getParameter("dob");
    pwriter.print(dob);
    String skills=request.getParameter("skills");
    pwriter.print(skills);
    String projects=request.getParameter("projects");
    pwriter.print(projects);
    String hobbies=request.getParameter("hobbies");
    pwriter.print(hobbies);
     
 } 
} 