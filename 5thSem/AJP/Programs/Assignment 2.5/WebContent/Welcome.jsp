<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<%@ page import="java.util.*" %>
<%@ page import="javax.servlet.*" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<meta http-equiv='Pragma' content='no-cache'>
<meta http-equiv='Cache-Control' content='no-cache'>
<title>Insert title here</title>
</head>
<script>  
    history.forward();  
</script> 
<body>
 
<% String name=(String)session.getAttribute("user"); %>
<% java.util.Date cr=new java.util.Date (session.getCreationTime()); %>
<% java.util.Date lr=new java.util.Date (session.getLastAccessedTime()); %>
<div style="font-size:25px;">Click here to <a href="Logout">Logout</a></div>
<center>
<div style="font-size:30px;">
<div>Hello <%=name %></div>
<div>Login time:<%=cr %></div>
<div>Last Accessed Time:<%=lr %></div>
</div></center>
 
</body>
</html>