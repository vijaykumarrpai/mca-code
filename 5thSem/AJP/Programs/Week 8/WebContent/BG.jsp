<%@ page language="java" contentType="text/html; charset=ISO-8859-1" pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<HTML>
<HEAD>
<TITLE>Color Test</TITLE>
</HEAD>

<%
String bgColor = "white";
String myColor = request.getParameter("color");
 
if (myColor != null) {
myColor = myColor;
}
else {
myColor = bgColor;
}
%>
 
<BODY BGCOLOR="<%= myColor %>"> 
<H2 ALIGN="CENTER">Color Testing</H2>
<form>
      <input type="text" name="color" size="25">
      <p></p>
      <input type="submit" value="Submit">
      <input type="reset" value="Reset">
      </form>  
</BODY>
</HTML>