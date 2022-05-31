# Classic Bomberman game
![This is an image](/src/assets/README_assets/readme_bomber.png)
## Task
**Implement next variations of the game:**
* Game for 2 players on 1 device.
* Game against computer.

**Game should comply with this interface:**
- `Load map levels` from the pakage.
- Players can pick up configurable `bonuses` from the ground(increasing flame power, additional bombs, speed increase, set off bombs on distance).
- `Saving the best score` to the leaderboards.

**There can we use polymorphism?:**
* Managing players: local player, AI(different variations).
* User interface: console, ncurses, SDL OpenGl, etc .
* Effects of bonuses: flame power increase, additional bombs, etc.

**For more information:**
* https://en.wikipedia.org/wiki/Bomberman

## Specification
We will be implementing a classic bomberman game. User interface allows to choose between singleplayer(game against computer)
and multiplayer(game on one device for at least 2 players). At the beginning of the game each player has 1 bomb, which is replenished after each detonation.
However, for increasing a probability of winning, players are recommended to collect bonuses, which are randomly scattered across the map, see [Bonuses llist](#task).
In singleplayer mode the main goal is to kill all monsters by placing down and detonating bombs,
after killing all enemies, player will be advanced to the next level. In multiplayer the winner is decided by the last player standing alive. 


## **Usage of polymorphism in this project**:
### **Abstract scheme of my implementation:**
![This is an image](/src/assets/README_assets/readme_scheme.png)

- We have an abstract class `AbstractObject`, which has a common implementation for all other classes. `PhysicalObject` and `MovableObject` are abstract classes as well, but have different interfaces for its own needs.
- Having these architecture allows us to avoid unnecessary copy/paste when creating class objects, or invoking it's methods, as we only should pass `AbstractClass` in function parameters.
- `Bomb` and `Bonus` will implement `PhysicalObject`, while `Player` and `Enemy` will implement `MovableObject`.


