declare
cursor empcursor is
select empno, empname, salary, deptno
from emp where deptno = 10;
empcursor_rec empcursor%rowtype;
begin
open empcursor;
fetch empcursor into empcursor_rec;
while empcursor%found loop
dbms_output.put_line(empcursor_rec.empno || ' ' || empcursor_rec.empname || ' ' || empcursor_rec.deptno || ' ' || empcursor_rec.salary * 1.2);
fetch empcursor into empcursor_rec;
end loop;
close empcursor;
end;
/