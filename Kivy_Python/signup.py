from kivy.app import App
from kivy.uix.widget import *
from kivy.graphics import *

#Class created to Sign Up
class FlyerSignUp(Widget):
    pass

# Runs Application
class SignUpApp(App):
    def build(self):
        return FlyerSignUp()

if __name__ == '__main__':
    SignUpApp().run()