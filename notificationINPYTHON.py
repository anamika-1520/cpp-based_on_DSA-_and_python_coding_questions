from notifypy import Notify
import time

# Create a notification object
notification = Notify()
name=input()

# Set the title and message for the notification
notification.title = "Notification Title for reminder"
notification.message = f"This is the notification message for drinking water.{name} now you have to drink water .you havent drink water since 1 hour."
notification.icon=r"C:\Users\wwwan\Downloads\blue-water-blur-close-up-1231622.jpg"
notification.audio=r"C:\Users\wwwan\Downloads\63323^4beep.wav"
time.sleep=3600
notification.urgency='critical'
# Display the notification
notification.send()
