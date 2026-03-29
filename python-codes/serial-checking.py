import serial
import serial.tools.list_ports

# Find available serial ports
ports = serial.tools.list_ports.comports()

if not ports:
    print("No serial devices found!")
    exit()

print("Available serial ports:\n")

for i, port in enumerate(ports):
    print(f"{i}: {port.device}")

# user selects port
choice = int(input("\nSelect port number: "))
port = ports[choice].device

baud = 115200

# open serial connection
ser = serial.Serial(port, baud)

print(f"\nConnected to {port} at {baud} baud")
print("Reading serial data...\n")

try:
    while True:
        if ser.in_waiting:
            data = ser.readline().decode(errors="ignore").strip()
            print(data)

except KeyboardInterrupt:
    print("\nSerial monitor stopped")
    ser.close()