<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Login</title>
</head>
<body>
<%
String user=request.getParameter("name");
String pass=request.getParameter("password");
%>
<h3>username:<%=user %></h3>
<h3>password:<%=pass %></h3>
</body>
</html>