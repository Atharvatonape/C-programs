from django.shortcuts import render
from django.http import HttpResponse


# Create your views here.
def index(request):
    name = 'John'
    return render(request, 'index.html', {'name': name})

def counter(request):
    words = request.POST['words']
    word_counter = len(words.split())
    return render(request, 'counter.html', {'word_counter': word_counter} )