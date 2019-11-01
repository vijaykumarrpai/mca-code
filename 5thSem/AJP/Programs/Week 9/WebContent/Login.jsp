<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Login</title>
</head>
<body>
<h1>Login</h1>
<%
String myname = (String) session.getAttribute("username");
if(myname != null) {
	out.println("Welcome " + myname + "<h2> Please logout first </h2>");
} 
else 
{%>
<form action="CheckLogin.jsp">
Name: <input type="text" name="username"><br>
Password: <input type="password" name="password"><br>
<input type="submit" value="login">
</form>
<%
}
%>
</body>
</html>