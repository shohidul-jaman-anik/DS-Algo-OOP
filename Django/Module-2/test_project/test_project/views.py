from django.http import HttpResponse


def home(req):
    return HttpResponse('''
                          <h1>This is my home page <h1/>
                          <a href='http://127.0.0.1:8000/blog/get-blog/'>Blog<a/>
                          <a href='http://127.0.0.1:8000/about/about-myself/'>About<a/>
                        ''')