getgenv().Autofarm = false
local remotePath = game:GetService("Workspace").Map["Training_Collisions"].BodyToughness["AFK_BT_10"].CFrame


while getgenv().Autofarm == true do
    function getCurrentPlayerPOS()
        local plyr = game.Players.LocalPlayer;
        if plyr.Character then
        return plyr.Character.HumanoidRootPart.Position;
        end
           return false;
    
    end
    
    function teleportTo(placeCFrame)
        local plyr = game.Players.LocalPlayer;
        if plyr.Character then
         plyr.Character.HumanoidRootPart.CFrame = placeCFrame
        end
    end
    teleportTo(remotePath)
    wait()
end
