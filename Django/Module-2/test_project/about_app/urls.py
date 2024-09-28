from  django.urls import path 

from . import views

urlpatterns = [
    path('about-myself/', views.aboutMyself )
]
