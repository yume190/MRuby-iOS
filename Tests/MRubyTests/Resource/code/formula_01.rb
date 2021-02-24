sensor_value_1 = Tgm.get_sensor("05edi001")
sensor_value_2 = Tgm.get_sensor("05edi002")
sensor_value_3 = Tgm.get_sensor("05edi003")
sensor_value_4 = Tgm.get_sensor("05edi004")
sensor_value_5 = Tgm.get_sensor("05edi005")

if sensor_value_1 == 1
  Tgm.set_status(11, 1, 0x01)
else
  Tgm.set_status(11, 1, 0)
end
if sensor_value_2 == 1
  Tgm.set_status(12, 1, 0x01)
else
  Tgm.set_status(12, 1, 0)
end
if sensor_value_3 == 1
  Tgm.set_status(13, 1, 0x01)
else
  Tgm.set_status(13, 1, 0)
end
if sensor_value_4 == 1
  Tgm.set_status(14, 1, 0x01)
else
  Tgm.set_status(14, 1, 0)
end
if sensor_value_5 == 1
  Tgm.set_sensor("05edr003", 1)
else
  Tgm.set_sensor("05edr003", 0)
end
