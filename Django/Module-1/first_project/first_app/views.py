from django.http import HttpResponse


def blog(req):
    return HttpResponse ("Hello,  this is my first Blog")