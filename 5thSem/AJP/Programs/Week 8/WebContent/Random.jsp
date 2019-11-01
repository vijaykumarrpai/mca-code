<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<HEAD>
<TITLE>Random Number</TITLE>
</HEAD>
<BODY> 
<H3 ALIGN="CENTER">
	Random number from 0 to 10:
      <FONT COLOR="RED">
        <%= (int) (Math.random() * 10) %>
      </FONT>
    </H3>
    <H3 ALIGN="CENTER">
      Random number from 0 to 100:
      <FONT COLOR="RED">
        <%= (int) (Math.random() * 100) %>
      </FONT>
    </H3>
   <H3 ALIGN="CENTER">
      Random number from 0 to 1000:
      <FONT COLOR="RED">
        <%= (int) (Math.random() * 1000) %>
      </FONT>
    </H3>
<H4 ALIGN="CENTER">Refresh the page to see if the number changes...</H4>
</BODY>
</HTML>