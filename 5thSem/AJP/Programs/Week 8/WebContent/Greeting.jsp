<%@ page import = "java.io.*,java.util.*" %>
<%@ page import = "javax.servlet.*,java.text.*" %>
<html>
<head>
<title>TimeWise Messages</title>
</head>
<body bgcolor="white">
<h1>Hello VJ</h1>
 <% java.util.Date clock = new java.util.Date( ); %>
 <% if (clock.getHours( ) < 12) { %>
   <h2>Good Morning!</h2>
 <% } else if (clock.getHours( ) < 18) { %>
   <h1>Good Day!</h1>
 <% } else { %>
   <h1>Good Evening!</h1>
 <% } %>
 Greeting with respect to time.
</body>
</html>