declare
cnum cleaner.CleanerId%type;
ccname cleaner.CleanerName%type;
ccsalary cleaner.Salary%type;
status boolean;
procedure get_cleaner_details (
cleaner_no in cleaner.CleanerId%type,
cleaner_name out cleaner.CleanerName%type,
cleaner_salary out cleaner.Salary%type,
status out Boolean) is
begin
select CleanerName,Salary
into cleaner_name, cleaner_salary
from cleaner c
where c.CleanerId= cleaner_no;
status :=TRUE;
exception
when no_data_found then
status :=FALSE;
end;

begin
cnum:= '113';
get_cleaner_details(cnum,ccname,ccsalary,status);
if (Status) then
dbms_output.put_line(cnum || ' ' || ccname || ' ' || ccsalary *1.1);
else
dbms_output.put_line ('Record' || cnum || 'not found');
end if;
end;
/