/*void pid() {
  //Roll calculations
  pid_error_temp = gyro_roll_input - pid_roll_setpoint;
  pid_i_mem_roll += pid_i_gain_roll * pid_error_temp;
  if (pid_i_mem_roll > pid_max_roll)pid_i_mem_roll = pid_max_roll;
  else if (pid_i_mem_roll < pid_max_roll * -1)pid_i_mem_roll = pid_max_roll * -1;

  pid_output_roll = pid_p_gain_roll * pid_error_temp + pid_i_mem_roll + pid_d_gain_roll * (pid_error_temp - pid_last_roll_d_error);
  if (pid_output_roll > pid_max_roll)pid_output_roll = pid_max_roll;
  else if (pid_output_roll < pid_max_roll * -1)pid_output_roll = pid_max_roll * -1;

  pid_last_roll_d_error = pid_error_temp;
  }*/
/*

void pidP() {
  //pitch
  tError = TotalAngleY - 0;
  iPitch +=0;//iPitchGain * tError;
  pPitch = pPitchGain * tError;
  dPitch = dPitchGain * ((tError - pitchEBef)/eTime);

  if (iPitch > maxPitch) {
    iPitch = maxPitch;
  } else if (iPitch < -maxPitch) {
    iPitch = -maxPitch;
  }

  pidPitch = pPitch + iPitch + dPitch;
  
  if (pidPitch > maxPitch) {
    pidPitch = maxPitch;
  } else if (pidPitch < -maxPitch) {
    pidPitch = -maxPitch;
  }

  
  
}*/
