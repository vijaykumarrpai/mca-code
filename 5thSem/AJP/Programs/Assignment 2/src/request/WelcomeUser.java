package request;

import java.io.*; 
import javax.servlet.*; 
import javax.servlet.http.*; 
 
public class WelcomeUser extends HttpServlet { 
 
 public void doPost(HttpServletRequest request, 
 HttpServletResponse response) 
 throws ServletException, IOException 
 { 
 
    response.setContentType("text/html"); 
    PrintWriter pwriter = response.getWriter(); 
 
    String name=request.getParameter("uname"); 
    pwriter.print("Hello "+name+"!");
    pwriter.print(" Welcome to AJP"); 
 } 
 
} 