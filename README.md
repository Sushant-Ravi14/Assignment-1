# 🎓 Student CGPA API

A RESTful API built using **Express.js** to manage student academic performance records using an in-memory JSON database.

---

## Objective

This project demonstrates how to:

- Build RESTful GET APIs using Express
- Use static and dynamic routes
- Perform filtering and aggregation
- Return proper HTTP status codes
- Deploy backend APIs professionally

No database is used. Data is stored in an in-memory JSON array.

---

## List of implemented routes

1️. GET `/students`

-Returns all students.
-Status Code: 200
-Response: Full student array

2️. GET `/students/topper`

-Returns student with highest CGPA.
-Status Code: 200
-Returns single student object
-If no students → 404

3️. GET `/students/average`

-Returns average CGPA of all students.
-Response Format:
  {
    "averageCGPA": 8.12
  }

4️. GET `/students/count`

Returns total number of students.

  {
    "totalStudents": 10
  }

5️. GET `/students/:id`

-Returns student by ID.
Example:
`/students/3`

If found → 200

If not found → 404

6️. GET `/students/branch/:branchName`

-Returns all students from a specific branch.
Example:
`/students/branch/CSE`

Returns array of students

If none found → returns empty array

---

# Sample API URLs
1. All students
   url: https://student-cgpa-api-sushant.onrender.com/students
   
2. Topper student
   url: https://student-cgpa-api-sushant.onrender.com/students/topper
   
3. Average CGPA
   url: https://student-cgpa-api-sushant.onrender.com/students/average
   
4. Number of students
   url: https://student-cgpa-api-sushant.onrender.com/students/count
   
5. Student by id
   url: https://student-cgpa-api-sushant.onrender.com/students/6
   
6. Student by branchName
   url: https://student-cgpa-api-sushant.onrender.com/students/branch/cse

   ---
   
# How To Run Locally
1. Clone Repository: 
`git clone https://github.com/Sushant-Ravi14/servers/tree/main/assignments/cgpa_api`

2️. Install Dependencies: 
`npm install`

3️. Run Server: 
`node index.js`

Server runs on: 
http://localhost:3000

## 🌍 Live Deployment

Render Deployment Link:
https://student-cgpa-api-sushant.onrender.com/
