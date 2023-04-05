-- write a SQL statement to find all users’ family name is “Chan”

SELECT * FROM tableA WHERE name LIKE '% Chan';

-- write a SQL statement to find all users’ family name is “Chan” and age &gt; 20
SELECT A.id, A.name, B.age
FROM tableA A
JOIN tableB B ON A.id = B.id
WHERE A.name LIKE '% Chan' AND B.age > 20;
