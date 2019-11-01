<%@page import = "java.io.*"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Protocol Independent JSP</title>
</head>
<body>
<%! public void service(ServletRequest request, ServletResponse response) throws ServletException, IOException {
response.setContentType("text/html");
PrintWriter out = response.getWriter();
out.println("Protocol Independent JSP");
}
%>
</body>
</html>