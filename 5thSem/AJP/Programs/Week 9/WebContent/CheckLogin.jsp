<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<% 
String username = request.getParameter("username");
String password = request.getParameter("password");

if (username == null || password == null) {
	out.println("Invalid parameter");
}

if (username.toLowerCase().trim().equals("admin") && password.toLowerCase().trim().equals("admin")) {
	out.println("Welcome " +username);
	session.setAttribute("username", username);
} else {
	out.println("Invalid parameter");
}
%>
</body>
</html>