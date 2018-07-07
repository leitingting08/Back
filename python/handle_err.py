# -*- coding: utf-8 -*-
# @Author: Administrator
# @Date:   2018-07-07 16:33:19
# @Last Modified by:   Administrator
# @Last Modified time: 2018-07-07 16:36:27
while True:
    try:
        x = int(input('Enter a number: '))
        break
    except ValueError:
        print('That\'s not a valid number!')
    except KeyboardInterrupt:
        print('\nNo input taken')
        break
    finally:
        print('\nAttempted Input\n')