from django.http import HttpResponse


def home(req):
    return HttpResponse ("Hello,  this is my first django page")
def about(req):
    return HttpResponse ("<h1>Hello,  this is my About page</h1>")