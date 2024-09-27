from django.http import HttpResponse


def home(req):
    return HttpResponse("This is my home page")