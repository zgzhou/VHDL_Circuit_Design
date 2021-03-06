e = ISEProcess.ExitCode;
  }

  // END/ERROR file creation
  if ( ISEExitCode != 0 ) {    
    ISETouchFile( ISEStep, "error" );
    
  } else {
    ISETouchFile( ISEStep, "end" );
  }

  return ISEExitCode;
}


//
// UTILITIES
//
function ISEStdOut( ISELine ) {

  ISELogFileStr.WriteLine( ISELine );
  
  if ( ISELogEcho ) {
    WScript.StdOut.WriteLine( ISELine );
  }
}

function ISEStdErr( ISELine ) {
  
  ISELogFileStr.WriteLine( ISELine );

  if ( ISELogEcho ) {
    WScript.StdErr.WriteLine( ISELine );
  }
}

function ISETouchFile( ISERoot, ISEStatus ) {

  var ISETFile = 
    ISEOpenFile( "." + ISERoot + "." + ISEStatus + ".rst" );
  ISETFile.close();
}

function ISEOpenFile( ISEFilename ) {

  var ISEFullPath = ISERunDir + "/" + ISEFilename;
  return ISEFileSys.OpenTextFile( ISEFullPath, 8, true );
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            