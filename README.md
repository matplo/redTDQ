# redTDQ

- ROOT only compilation for PWG-DQ reduced Trees (from https://github.com/alisw/AliPhysics/PWGDQ)
- Includes AliKF (builds a stand alone library) - code extracted/modified from https://github.com/alisw/AliRoot (removed deps to ALIROOT)

# usage

- make sure root env is setup (https://root.cern.ch)
- requires sources of https://github.com/alisw/AliPhysics (only at the begining; or after --cleanup)

```
./build.sh --build --aliphysics=<path to>/AliPhysics --aliroot=<path to>/AliRoot
```

- for more options (cleanup)

```
./build.sh
```
