-- https://leetcode.com/problems/duplicate-emails
select Email
from Person
group by Email
having count(*) > 1