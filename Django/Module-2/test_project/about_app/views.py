from django.http import HttpResponse


def aboutMyself(req):
    return HttpResponse('''
                        <h1>This is About Page <h1/>
                        <h1> Hi I am Anik, I am Software Engineer<h1/>
                        <a href='http://127.0.0.1:8000/blog/get-blog/'>About<a/>
                        ''')
