package behavioral.command;

import behavioral.command.commands.Command;

public class CopyCommand extends Command {
    public CopyCommand(Application app, Editor editor) {
        super(app, editor);
    }

    @Override
    public void execute() {

    }
}
