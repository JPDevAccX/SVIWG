<!DOCTYPE html>
<html lang="en">

<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">

	<!-- METADATA -->
	<meta name="keywords" content="walk, vip, guide, visually impaired, Sheffield, South Yorkshire" />
	<meta name="description" content="Sheffield, Visually Impaired, Walking Group" />
	<meta name="author" content="Christine Whittaker, James Percival" />
	<meta name="copyright" content="&copy;2024 SVIWG" />

	<!-- BOOTSTRAP AND ADDITIONAL CSS -->
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet"
		integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
	<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js"
		integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL"
		crossorigin="anonymous"></script>
	<link rel="stylesheet" href="css/stylesheet_20250112.css" />

	<title>SVIWG - <%=title%></title>
</head>

<body>
	<div class="container-fluid g-0">

		<!-- HEADER AND NAVBAR -->
		<header class="sviwg-header mt-1 mb-4">
			<h1>SHEFFIELD VISUALLY IMPAIRED WALKING GROUP</h1>
			<img src="images/sviwg_logo_new.png" class="sviwg-logo" alt="S&nbsp;V&nbsp;I&nbsp;W&nbsp;G logo" />

			<!-- NAVBAR -->
			<nav class="navbar navbar-expand-lg bg-body-tertiary sviwg-navbar">
				<div class="container-xxl">
					<%
						If title = "Home" Then
							Response.Write("<a class='navbar-brand pe-sm-3 active' href='default.asp'>WELCOME</a>")
						Else
							Response.Write("<a class='navbar-brand pe-sm-3' href='default.asp'>WELCOME</a>")
						End If
					%>
					
					<button class="navbar-toggler" type="button" data-bs-toggle="collapse"
						data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false"
						aria-label="Toggle navigation">
						<span class="navbar-toggler-icon"></span>
					</button>
					<div class="collapse navbar-collapse" id="navbarSupportedContent">
						<ul class="navbar-nav me-auto mb-2 mb-lg-0 mr-3 pe-5">
							<li class="nav-item dropdown pe-2">
								<%
									If title = "Events" or title = "Annual Programme" Then
										Response.Write("<a class='nav-link dropdown-toggle active'")
									Else
										Response.Write("<a class='nav-link dropdown-toggle'")
									End If
									Response.Write(" href='#' id='navbarDropdown' role='button' data-bs-toggle='dropdown' aria-expanded='false'>")
									Response.Write("WALKS AND EVENTS</a>")
								%>
								<ul class="dropdown-menu" aria-labelledby="navbarDropdown">
									<li>
										<%
											If title = "Events" Then
												Response.Write("<a class='dropdown-item active'")
											Else
												Response.Write("<a class='dropdown-item'")
											End If
											Response.Write(" href='events.asp'>")
											Response.Write("UPCOMING WALKS AND EVENTS</a>")
										%>
									</li>
									<li>
										<%
											If title = "Annual Programme" Then
												Response.Write("<a class='dropdown-item active'")
											Else
												Response.Write("<a class='dropdown-item'")
											End If
											Response.Write(" href='walks_programme.asp'>")
											Response.Write("ANNUAL WALKS PROGRAMME</a>")
										%>
									</li>
								</ul>
							</li>
							<li class="nav-item">
								<%
									If title = "News" Then
										Response.Write("<a class='nav-link pe-3 active'")
									Else
										Response.Write("<a class='nav-link pe-3'")
									End If
									Response.Write(" href='news_and_views.asp'>")
									Response.Write("NEWS</a>")
								%>
							</li>
							<li class="nav-item">
								<%
									If title = "Gallery" Then
										Response.Write("<a class='nav-link active'")
									Else
										Response.Write("<a class='nav-link'")
									End If
									Response.Write(" href='gallery.asp'>")
									Response.Write("GALLERY</a>")
								%>
							</li>
							<li class="nav-item">
								<%
									If title = "Resources" Then
										Response.Write("<a class='nav-link active'")
									Else
										Response.Write("<a class='nav-link'")
									End If
									Response.Write(" href='resources.asp'>")
									Response.Write("RESOURCES</a>")
								%>
							</li>
							<li class="nav-item">
								<%
									If title = "About SVIWG" Then
										Response.Write("<a class='nav-link active'")
									Else
										Response.Write("<a class='nav-link'")
									End If
									Response.Write(" href='about_sviwg.asp'>")
									Response.Write("ABOUT US</a>")
								%>
							</li>
						</ul>
							<%
								If title = "Contact" Then
									Response.Write("<a class='nav-link sviwg-contact active'")
								Else
									Response.Write("<a class='nav-link sviwg-contact'")
								End If
								Response.Write(" href='contact.asp'>")
								Response.Write("CONTACT</a>")
							%>
					</div>
				</div>
			</nav>
		</header>