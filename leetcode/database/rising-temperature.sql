SELECT
    w1.Id
FROM
    weather w1
    INNER JOIN weather w2 ON to_days (w1.recorddate) - to_days (w2.recorddate) = 1
        AND w1.Temperature > w2.Temperature
