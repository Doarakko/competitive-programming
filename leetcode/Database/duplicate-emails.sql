SELECT DISTINCT
    (p1.Email)
FROM
    Person p1
    INNER JOIN Person p2 ON p2.Email = p1.Email
        AND p2.id != p1.id
