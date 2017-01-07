from django.conf.urls import include, url
from django.contrib import admin
from polls import views


urlpatterns = [
    url(r'^polls/', include('polls.urls')),
    url(r'^$', views.index, name='site_index'),
]



