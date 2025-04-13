<%@page import="com.entity.user"%>
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Registration Form</title>
        <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.4/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-DQvkBjpPgn7RC31MCQoOeC9TI2kdqa4+BSgNMNj8v77fdC77Kj5zpWFTJaaAoMbC" crossorigin="anonymous">
<link rel="stylesheet" href="css/bootstrap.min.css" type="text/css">
    <link rel="stylesheet" href="css/font-awesome.min.css" type="text/css">
    <link rel="stylesheet" href="css/elegant-icons.css" type="text/css">
    <link rel="stylesheet" href="css/owl.carousel.min.css" type="text/css">
    <link rel="stylesheet" href="css/magnific-popup.css" type="text/css">
     <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.7.2/css/all.min.css" type="text/css"> 
    <link rel="stylesheet" href="css/style.css" type="text/css">
        <style>
/*            body {
                background: linear-gradient(135deg, #e0eafc, #cfdef3);
                font-family: 'Arial', sans-serif;
                min-height: 100vh;
                display: flex;
                justify-content: center;
                align-items: center;
                padding: 20px;
            }*/
            .form-container {
                background: white;
                padding: 30px;
                border-radius: 15px;
                box-shadow: 0 4px 20px rgba(0, 0, 0, 0.1);
                width: 100%;
                max-width: 800px;
            }
            h1 {
                text-align: center;
                color: #333;
                margin-bottom: 25px;
            }
            .form-control:focus {
                border-color: #6c63ff;
                box-shadow: 0 0 5px rgba(108, 99, 255, 0.5);
            }
            .btn-submit {
                background-color: #00ccff;
                border: none;
                width: 100%;
                padding: 12px;
                font-size: 16px;
            }
            .btn-submit:hover {
                background-color: #514bc6;
            }
            .error {
                color: red;
                font-size: 12px;
                display: none;
                margin-top: 5px;
            }
            .form-label {
                font-weight: 500;
            }
        </style>
    </head>
    <body>
         <!-- Header Section Begin -->
    <header class="header-section">
        <div class="container-fluid">
            <div class="row">
                <div class="col-lg-12">
                    <div class="logo">
                        <a href="./index.html">
                            <img src="img/logo.png" alt="">
                        </a>
                    </div>
                    <nav class="nav-menu mobile-menu">
                        <ul>
                            <li class="active"><a href="./index.jsp">Home</a></li>
                            <li><a href="./about.jsp">About</a></li>
                            <li><a href="./services.jsp">Services</a></li>
                              <li><a href="post.jsp">post</a></li>
                            <!-- <li><a href="./pricing.html">Pricing</a></li> -->
                            <!-- <li><a href="./contact.html">Contact</a></li> -->
                            
                         <%user u = new user();
                                        u = (user) session.getAttribute("user");
                                    %>
                                    <%String mode = "";
                                        if (u != null) {
                                    %>
                                <li><a href="./profile.jsp">profile </a></li>
                                    <%}%>
                            <!--<li><a href="login.jsp"><i class="fa-solid fa-user-plus"></i></a></li>-->
                        </ul>
                    </nav>
                   
                    
                </div>
            </div>
        </div>
    </header>
         <div class="form-container" style="position:relative;left: 14rem;top: 2.5rem ">
            <h1>Registration Form</h1>
            <form id="registrationForm" onsubmit="return validateForm(event)" action="Registration" method="post">
                <div class="row">
                    <div class="col-md-6">
                        <div class="mb-3">
                            <label for="Name" class="form-label">Enter Name</label>
                            <input type="text" class="form-control" id="firstName" name="Name" value="${param.Name}" placeholder="Enter first name">
                            <span class="error" id="firstNameError">Only letters A-Z allowed</span>
                            <% if (request.getAttribute("nameError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("nameError") %></span>
                            <% } %>
                        </div>
                        <div class="mb-3">
                            <label for="middleName" class="form-label">Enter UserName</label>
                            <input type="text" class="form-control" id="middleName" name="userName" value="${param.userName}" placeholder="Enter Username">
                            <span class="error" id="userNameError">Only letters A-Z allowed</span>
                            <% if (request.getAttribute("usernameError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("usernameError") %></span>
                            <% } %>
                        </div>
                        <div class="mb-3">
                            <label class="form-label">Gender</label><br>
                            <input type="radio" name="gender" value="male" id="male" ${param.gender == 'male' ? 'checked' : ''}> <label for="male">Male</label>
                            <input type="radio" name="gender" value="female" id="female" class="ms-3" ${param.gender == 'female' ? 'checked' : ''}> <label for="female">Female</label>
                            <span class="error" id="genderError">Please select a gender</span>
                            <% if (request.getAttribute("genderError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("genderError") %></span>
                            <% } %>
                        </div>
                        <div class="mb-3">
                            <label for="favoritePlace" class="form-label">Favorite Place</label>
                            <select class="form-select" id="favoritePlace" name="favoritePlace">
                                <option value="">Select a place</option>
                                <option value="Beach" ${param.favoritePlace == 'Beach' ? 'selected' : ''}>Beach</option>
                                <option value="Mountains" ${param.favoritePlace == 'Mountains' ? 'selected' : ''}>Mountains</option>
                                <option value="City" ${param.favoritePlace == 'City' ? 'selected' : ''}>City</option>
                                <option value="Forest" ${param.favoritePlace == 'Forest' ? 'selected' : ''}>Forest</option>
                            </select>
                            <span class="error" id="favoritePlaceError">Please select a place</span>
                            <% if (request.getAttribute("placeError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("placeError") %></span>
                            <% } %>
                        </div>
                        <div class="mb-3">
                            <label for="address" class="form-label">Address</label>
                            <textarea class="form-control" id="address" name="address" rows="3" placeholder="Enter your address">${param.address}</textarea>
                            <span class="error" id="addressError">Address is required</span>
                            <% if (request.getAttribute("addressError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("addressError") %></span>
                            <% } %>
                        </div>
                    </div>

                    <div class="col-md-6">
                        <div class="mb-3">
                            <label for="email" class="form-label">Email</label>
                            <input type="email" class="form-control" id="email" name="email" value="${param.email}" placeholder="Enter your email">
                            <span class="error" id="emailError">Enter a valid email</span>
                            <% if (request.getAttribute("emailError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("emailError") %></span>
                            <% } %>
                        </div>
                        <div class="mb-3">
                            <label for="password" class="form-label">Password</label>
                            <input type="password" class="form-control" id="password" name="password" placeholder="Enter password">
                            <span class="error" id="passwordError">Password must be at least 6 characters</span>
                            <% if (request.getAttribute("passwordError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("passwordError") %></span>
                            <% } %>
                        </div>
                        <div class="mb-3">
                            <label for="confirmPassword" class="form-label">Confirm Password</label>
                            <input type="password" class="form-control" id="confirmPassword" name="confirmPassword" placeholder="Confirm password">
                            <span class="error" id="confirmPasswordError">Passwords do not match</span>
                            <% if (request.getAttribute("confirmPasswordError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("confirmPasswordError") %></span>
                            <% } %>
                        </div>
                        <div class="mb-3">
                            <label for="mobile" class="form-label">Mobile Number</label>
                            <input type="text" class="form-control" id="mobile" name="mobile" value="${param.mobile}" placeholder="Enter mobile number">
                            <span class="error" id="mobileError">Enter a valid 10-digit number</span>
                            <% if (request.getAttribute("mobileError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("mobileError") %></span>
                            <% } %>
                        </div>
                        <div class="mb-3">
                            <label class="form-label">Are you a:</label><br>
                            <input type="radio" name="role" value="photographer" id="photographer" ${param.role == 'photographer' ? 'checked' : ''}> <label for="photographer">Photographer</label>
                            <input type="radio" name="role" value="user" id="user" class="ms-3" ${param.role == 'user' ? 'checked' : ''}> <label for="user">User</label>
                            <span class="error" id="roleError">Please select a role</span>
                            <% if (request.getAttribute("roleError") != null) { %>
                                <span class="error" style="display: block;"><%= request.getAttribute("roleError") %></span>
                            <% } %>
                        </div>
                    </div>
                </div>
                <button type="submit" class="btn btn-submit text-white">Register</button>
                <a href="login.jsp" class="forgot-password" style="position: relative;top: 1rem;left: 20rem">Click to Login</a>
            </form>
        </div>

        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>
<!--        <script>
            function validateForm(event) {
                // Keep your existing client-side validation
                event.preventDefault();
                let isValid = true;

                const nameRegex = /^[A-Za-z]+$/;
                const firstName = document.getElementById("firstName").value;
                const middleName = document.getElementById("middleName").value;

                if (!nameRegex.test(firstName)) {
                    document.getElementById("firstNameError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("firstNameError").style.display = "none";
                }

                if (middleName && !nameRegex.test(middleName)) {
                    document.getElementById("userNameError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("userNameError").style.display = "none";
                }

                const gender = document.querySelector('input[name="gender"]:checked');
                if (!gender) {
                    document.getElementById("genderError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("genderError").style.display = "none";
                }

                const email = document.getElementById("email").value;
                const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
                if (!emailRegex.test(email)) {
                    document.getElementById("emailError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("emailError").style.display = "none";
                }

                const password = document.getElementById("password").value;
                const confirmPassword = document.getElementById("confirmPassword").value;
                if (password.length < 6) {
                    document.getElementById("passwordError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("passwordError").style.display = "none";
                }

                if (password !== confirmPassword) {
                    document.getElementById("confirmPasswordError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("confirmPasswordError").style.display = "none";
                }

                const mobile = document.getElementById("mobile").value;
                const mobileRegex = /^\d{10}$/;
                if (!mobileRegex.test(mobile)) {
                    document.getElementById("mobileError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("mobileError").style.display = "none";
                }

                const favoritePlace = document.getElementById(" favors").value;
                if (!favoritePlace) {
                    document.getElementById("favoritePlaceError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("favoritePlaceError").style.display = "none";
                }

                const role = document.querySelector('input[name="role"]:checked');
                if (!role) {
                    document.getElementById("roleError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("roleError").style.display = "none";
                }

                const address = document.getElementById("address").value;
                if (!address) {
                    document.getElementById("addressError").style.display = "block";
                    isValid = false;
                } else {
                    document.getElementById("addressError").style.display = "none";
                }

                if (isValid) {
                    document.getElementById("registrationForm").submit();
                }

                return isValid;
            }
        </script>-->
    </body>
</html>