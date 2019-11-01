<%@page import="coreservlets.RanUtilities.*"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
<h1>Generation of Random numbers</h1>
<ul>
<% 
int rand = coreservlets.RanUtilities.randomInt(10);
for(int i = 0; i < rand; i++) {
	out.println("<li>" +coreservlets.RanUtilities.randomInt(10));
}
%>
</ul>
</body>
</html>