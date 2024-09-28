
from  django.urls import path 

from . import views
urlpatterns = [
    path('get-blog/', views.getBlog ),
    path('get-review/', views.getReview ),
]
