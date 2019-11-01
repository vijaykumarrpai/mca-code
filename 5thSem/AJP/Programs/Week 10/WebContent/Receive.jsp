<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
 <%@ page isErrorPage="true" %>
 <h3> <font color="red">
 Sorry, Quotient cannot be printed. <br>
 Cause of problem: <%= exception %> </font> </h3>
</body>
</html>