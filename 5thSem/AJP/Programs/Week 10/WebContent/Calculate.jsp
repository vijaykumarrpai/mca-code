<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%@ page errorPage="Receive.jsp"%>

<%
int firstNo = Integer.parseInt(request.getParameter("t1"));
int secondNo = Integer.parseInt(request.getParameter("t2"));
%>

<h3>Your first number is <%=firstNo %> and second number is <%=secondNo %>
Quotient is <%=firstNo/secondNo %></h3>
</body>
</html>