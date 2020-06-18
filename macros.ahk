#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

^Numpad0::
{
send {BS}
send {0}
send {Down}
Send {End}
return
}

^Numpad1::
{
send {BS}
send {1}
send {Down}
Send {End}
return
}

^Numpad2::
{
send {BS}
send {2}
send {Down}
Send {End}
return
}

^Numpad3::
{
send {BS}
send {3}
send {Down}
Send {End}
return
}

^Numpad4::
{
send {BS}
send {4}
send {Down}
Send {End}
return
}

^NumpadEnter::
{
send {Down}
send {Down}
send {End}
return
}

^NumpadAdd::
{
Send +{Right}{Right}{Right}{Right}{Right}
send ^+{Down}
send ^+{Down}
send ^+{Down}

Loop, 10
{
    send {Down}
}

return
}

