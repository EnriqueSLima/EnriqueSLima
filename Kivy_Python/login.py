from kivy.app import App
from kivy.uix.label import Label
from kivy.uix.textinput import TextInput
from kivy.uix.button import Button
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.screenmanager import ScreenManager, Screen
from kivy.core.window import Window
from kivy.graphics import *

# App Window Options
#Window.clearcolor = (1, 1, 1, 1)
Window.clearcolor = (.0, .0, .0, 1)
Window.size = (360, 640)

# Inputs Declaration

class UserMail(TextInput):
    pass
class UserPass(TextInput):
    pass
class RegisterUser(TextInput):
    pass
class RegisterMail(TextInput):
    pass
class RegisterPass(TextInput):
    pass
class ValidateMail(TextInput):
    pass

# Buttons Declaration
class LogIn_Btn(Button):
    pass
class Register_Btn(Button):
    pass
class SignUp_Btn(Button):
    pass
class Validate_Btn(Button):
    pass

# Log In screen
class MyLogin(Screen):
    pass
# Register Screen
class MySignUp(Screen):
    pass
# Validation Mail Screen
class MyValidation(Screen):
    pass
# Root Layout
class MyLayout(BoxLayout):
    def build(self):
        my_layout = BoxLayout()
        self = my_layout
        return my_layout

# Root Screen
class MyRootScreen(Screen):
    sm = ScreenManager()
    sm.add_widget(MyLogin(name ='screen_login'))
    sm.add_widget(MySignUp(name ='screen_signup'))
    sm.add_widget(MySignUp(name ='screen_validation'))



# Runs Application
class MyApp(App):
    def build(self):
        return MyRootScreen()

if __name__ == '__main__':
    MyApp().run()