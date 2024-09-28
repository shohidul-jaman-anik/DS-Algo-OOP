from django.http import HttpResponse


def getBlog(req):
    return HttpResponse('''
                        <h1>This is Blog Page <h1/>
                        <h1> Gell All BLog Successfully<h1/>
                        <a href='http://127.0.0.1:8000/about/about-myself/'>About<a/>
                        ''')


def getReview(req):
    return HttpResponse('All BLog are good!')

