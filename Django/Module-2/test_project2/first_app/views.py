from django.shortcuts import render


# Create your views here.
def contact(request):
    return render(request, './first_app/index.html',context={'courses':[
        {'id':1,'name':'python','teacher':'Anik'},
        {'id':2,'name':'java','teacher':'Raj'},
        {'id':3,'name':'javascript','teacher':'Rajesh'}
    ]})


