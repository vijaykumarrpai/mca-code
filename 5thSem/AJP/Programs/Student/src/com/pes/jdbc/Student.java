package com.pes.jdbc;

public class Student {			
		private String usn;
		private String fname;
		private String lname;
		private String dept;
		private int age;
		private Double percentage;
		
		public String getUsn() {
			return usn;
		}
		public void setUsn(String usn) {
			this.usn = usn;
		}
		
		public String getFname() {
			return fname;
		}
		public void setFname(String fname) {
			this.fname = fname;
		}
		public String getLname() {
			return lname;
		}
		public void setLname(String lname) {
			this.lname = lname;
		}
		public String getDept() {
			return dept;
		}
		public void setDept(String dept) {
			this.dept = dept;
		}
		public int getAge() {
			return age;
		}
		public void setAge(int age) {
			this.age = age;
		}
		public Double getPercentage() {
			return percentage;
		}
		public void setPercentage(Double percentage) {
			this.percentage = percentage;
		}
}
