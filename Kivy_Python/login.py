from kivy.app import App
from kivy.uix.widget import *
from kivy.graphics import *

#Class created to Sign Up
class FlyerSignUp(Widget):
    pass

# Class created to Sign In/Up
class FlyerLogin(Widget):
    pass

# Runs Application
class LoginApp(App):
    def build(self):
        return FlyerLogin()

if __name__ == '__main__':
    LoginApp().run()