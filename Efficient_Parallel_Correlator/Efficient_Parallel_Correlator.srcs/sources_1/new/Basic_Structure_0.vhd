----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 2017/05/06 10:20:46
-- Design Name: 
-- Module Name: Basic_Structure_0 - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Basic_Structure_0 is
    GENERIC(m: INTEGER:=8);
    Port ( clk : in STD_LOGIC;
           rst : in STD_LOGIC;
           W : in STD_LOGIC;
           aN_in: in SIGNED(m-1 downto 0);
           bN_in: in SIGNED(m-1 downto 0);
           aN_out: out SIGNED(m-1 downto 0);
           bN_out: out SIGNED(m-1 downto 0));
end Basic_Structure_0;

architecture Behavioral of Basic_Structure_0 is
begin
    process(clk,W,rst)
        variable an,bn:signed(m-1 downto 0):=(others=>'0');
    begin
        if rst='1' then
            an:=(others=>'0');
            bn:=(others=>'0');
    ----------------------butterfly-------------------------
        elsif clk'event and clk='1' then
            if W='1' then
                an := aN_in+bN_in; 
                bn := aN_in-bN_in; 
            else
                an := -aN_in+bN_in; 
                bn := -aN_in-bN_in;
            end if;
         end if;
         aN_out<=an;
         bN_out<=bn;
    end process;
end Behavioral;
