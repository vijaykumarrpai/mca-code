package bean;

public class Employee {
	private String Id;
	private String Name;
	private long PF = 100;
	private long PT = 200;
	private long IT = 300;
	private long GrossSalary = 1000000;
	private long NetSalary = GrossSalary - PF - PT - IT; 
	public String getId() {
		return Id;
	}
	public void setId(String id) {
		Id = id;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public long getPF() {
		return PF;
	}
	public void setPF(long pF) {
		PF = pF;
	}
	public long getPT() {
		return PT;
	}
	public void setPT(long pT) {
		PT = pT;
	}
	public long getIT() {
		return IT;
	}
	public void setIT(long iT) {
		IT = iT;
	}
	public long getGrossSalary() {
		return GrossSalary;
	}
	public void setGrossSalary(long grossSalary) {
		GrossSalary = grossSalary;
	}
	public long getNetSalary() {
		return NetSalary;
	}
	public void setNetSalary(long netSalary) {
		NetSalary = netSalary;
	}
}
