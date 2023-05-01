from kivy.app import App
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.widget import Widget
from kivy.uix.textinput import TextInput
from kivy.uix.label import Label
from kivy.uix.button import Button
from kivy.graphics import *

# Inputs

class UserMail(TextInput):
    def __init__(self, **kwargs):
        super(UserMail, self).__init__(**kwargs)

class UserPass(TextInput):
    def __init__(self, **kwargs):
        super(UserPass, self).__init__(**kwargs)

class RegisterUser(TextInput):
    def __init__(self, **kwargs):
        super(RegisterUser, self).__init__(**kwargs)

class RegisterMail(TextInput):
    def __init__(self, **kwargs):
        super(RegisterMail, self).__init__(**kwargs)

class RegisterPass(TextInput):
    def __init__(self, **kwargs):
        super(RegisterPass, self).__init__(**kwargs)

# Buttons

class LogIn_Btn(Button):
    def on_press(self):
        print("Log In button pressed")

class Register_Btn(Button):
    def on_press(self):
        print("Register button pressed")

class SignUp_Btn(Button):
    def on_press(self):
        print("Sign Up button pressed")

# Sign Up window

class MySignUp(Widget):

    def __init__(self, **kwargs):
        super(MySignUp, self).__init__(**kwargs)

    def _login_btn(Button):
        pass

# Log In window

class MyLogin(Widget):
    def __init__(self, **kwargs):
        super(MyLogin, self).__init__(**kwargs)

# Root Screen
class MyRootScreen(BoxLayout):
    pass

# Runs Application
class MyApp(App):
    def build(self):
        return MyRootScreen()

if __name__ == '__main__':
    MyApp().run()