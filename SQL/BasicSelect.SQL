-- https://www.hackerrank.com/challenges/revising-the-select-query-2/problem
SELECT CITY.NAME FROM CITY WHERE CITY.POPULATION > 120000 AND CITY.COUNTRYCODE = 'USA';

-- https://www.hackerrank.com/challenges/select-all-sql/problem
SELECT * FROM CITY;

-- https://www.hackerrank.com/challenges/select-by-id/problem
SELECT * FROM CITY WHERE CITY.ID = 1661;

-- https://www.hackerrank.com/challenges/japanese-cities-attributes/problem
SELECT * FROM CITY WHERE CITY.COUNTRYCODE = 'JPN';

-- https://www.hackerrank.com/challenges/japanese-cities-name/problem
SELECT CITY.NAME FROM CITY WHERE CITY.COUNTRYCODE = 'JPN';

-- https://www.hackerrank.com/challenges/weather-observation-station-1/problem?
SELECT STATION.CITY, STATION.STATE FROM STATION;

-- https://www.hackerrank.com/challenges/weather-observation-station-3/problem
SELECT DISTINCT STATION.CITY FROM STATION WHERE STATION.ID % 2 = 0;
